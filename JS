//variables
function outer() {
  let x = 10;

  function inner() {
    let x = 20; // Shadows outer x
    console.log(x); // 20
  }

  inner();
  console.log(x); // 10
}

outer();
//arrays
const users = [
  { name: "Asha", age: 28 },
  { name: "Ravi", age: 34 },
  { name: "Meera", age: 22 }
];

// Filter and map
const namesOver30 = users
  .filter(user => user.age > 30)
  .map(user => user.name);

// Destructuring
const [firstUser, ...rest] = users;
console.log(firstUser.name); // Asha
//functions
// Closure
function counter() {
  let count = 0;
  return function () {
    count++;
    return count;
  };
}

const increment = counter();
console.log(increment()); // 1
console.log(increment()); // 2

// Currying
const multiply = a => b => a * b;
const double = multiply(2);
console.log(double(5)); // 10

// Recursion
function factorial(n) {
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}
//objects:prototypes
// Constructor with prototype
function Person(name) {
  this.name = name;
}
Person.prototype.greet = function () {
  console.log(Hi, I'm ${this.name});
};

const p1 = new Person("Kiran");
p1.greet();

// Dynamic property
const key = "role";
const user = {
  name: "Priya",
  [key]: "admin"
};

// Deep clone
const clone = JSON.parse(JSON.stringify(user));
//loops
// Custom iterator
const iterable = {
  data: [1, 2, 3],
  [Symbol.iterator]() {
    let i = 0;
    return {
      next: () => ({
        value: this.data[i++],
        done: i > this.data.length
      })
    };
  }
};

for (let value of iterable) {
  console.log(value);
}

// Generator
function* idGenerator() {
  let id = 0;
  while (true) {
    yield ++id;
  }
}

const gen = idGenerator();
console.log(gen.next().value); // 1
console.log(gen.next().value); // 2
