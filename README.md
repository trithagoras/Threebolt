# Threebolt

![](res/threebolt.webp)

## Language Features

Threebolt is a general-purpose multi-paradigm programming language. Here are some of the key features of the language:

### Automatic Reference Counting (ARC) memory management strategy.

Threebolt uses ARC to automatically manage memory very similar to how Swift does it. Class objects are pass-by-reference and each strong reference created increments the reference count to that object by one. Each time a strong reference goes out of scope, the reference count decrements and if the count reaches zero, the object is destroyed and the memory is deallocated.

Strong reference cyclic dependencies are automatically detected using the compiler and a warning is given suggesting you use **weak references**. Weak references to an object do not change the reference count of an object and are necessarily of the `Optional` type so that they may become `None` after the referenced object is destroyed.

Example: a weak reference to class `A`: `let ~a: A?`

### Simple Object-Oriented Programming

Threebolt is a stripped-down version of an object-oriented programming language. It allows the creation of classes which cannot inherit any other class and there are no abstract classes - the only option for polymorphism is through interface implementation and pattern matching through types.

This decision was decided to limit the overuse of object inheritance such that debugging a program becomes nightmarish through constant jumps to several abstract parts of the codebase. Debugging a self-contained class will only jump to other parts within the same class.

Other OOP decisions made are:

* Class members are **public** by default
* Constructors and destructors are replaced with initializers and deinitializers
* All class fields must be assigned in all initializers

### Mutability qualifier `*`

Values and references are *immutable by default*, requiring the mutability qualifier (`*`) to be able to mutate.

Example:
```rs
let x := 5;
x += 1;     // Does not compile: x is immutable by default

let *y := x;
y += 1;     // Compiles. The mutable value y is set to the copy of x and incremented.
```

Class methods are also immutable by default, meaning they are guaranteed to not mutate the object. The method can be set to mutable through the `*self` reference.

Example:
```rs
class Person {
    let age: int;

    // this is an initializer method.
    // self does not need to be set to mutable here
    fn init(self, age: int) {
        self.age = age;
    }

    fn birthday(*self) {
        self.age += 1;
    }
}

fn main() {
    let *person1 := Person(17);     // must be mutable to call mutable class method
    person1.birthday();
    println(person1.age);           // prints "18"
}
```

### Generics

Classes, structs, and interfaces can all be generic with an expressive generic system with constraints, aliases, etc.

Example:
```rs
struct Vector2<T> where T impl Num {
    x: T;
    y: T;

    fn translate(*self, dx: T, dy: T) {
        self.x += dx;
        self.y += dy;
    }

    // ...
}

alias Vector2i := Vector2<int>;
alias Vector2f := Vector2<float>;
```

### Types and pattern matching

New data types can be defined similar to how they can in Rust and other functional languages such as Haskell and they can be used in pattern matching. There are multiple types defined in the Threebolt standard library including the `Optional<T>` and `Result<T, E>` types.

Example:
```rs
// note that this type is already defined in the stdlib. More information below.
type Optional<T> {
    None,
    Some(T)
}

fn safe_divide(p: float, q: float) -> Optional<float> {
    if q == 0.0 {
        return None;
    }
    return Some (p / q);
}
```


### Optional syntax

Optionals are used extensively in code, and so, familiar syntactic sugar is introduced to reduce the boilerplate code associated with them. You can check if values are `None` with `?`, forcefully unwrap values with `!`, and use the None coalescing operator with `??`.

Example:
```rs
let x: float? = 5.0;            // equivalent to let x: Optional<int> = Some(5);
let y := safe_divide(x, 0.0);   // y == None

println(y ?? "NaN");
```