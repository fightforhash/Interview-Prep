console.log(Math.floor(11.3))

//Types

//let myNumberExone: number = 42;
//let myStringExone: string = "Hello, TypeScript";

let myNumberExone: number;
let myStringExone: string;

myNumberExone = 42;
myStringExone = "Hello, TypeScript";

console.log("My Number Is: ", myNumberExone);
console.log("My String Is: ", myStringExone);

//Dynamic Type Determination
//Ex. let greeting = "Hello" 선호되지 않음

// any라는 타입도 있고 auto 비슷하지만, type safety에 의해 선호되지 않음
let risky: any = "yo";
risky = 123;
risky = [1, 2, 3];
// 이런 건 타입 추론도 안 되고 자동완성도 안 됨 ❌


//Type Annotation with Function

function calculateArea(lengthy: number, width: number): number{
    return lengthy * width;
}

const lengthy = 3;
const width = 5;
const area = calculateArea(lengthy, width);
console.log(`The area of rectangle is ${area}`);

function calculateArea1(lengthy?: number, width: number = 4): number{ // 이런식으로 optional, 그리고 파라메터 지정 가능
    return width; //순서는 필수 -> 디폴트(지정) -> 옵셔널
}

//rest 파라미터 function
function addAll(...nums: number[]): number{
    let result = 0;

    for (let i = 0; i < nums.length; i++){
        result += nums[i];
    }

    return result;
}

console.log(addAll(10,20,30,100,10.5,+false)); //170.5 나와야함

//Arrow function syntax 간단 함수구현

const addWithArrow = (num1: number, num2: number): number => num1 + num2;
console.log(addWithArrow(10, 20)); //30나옴

//Anonymous Function
const add = function(num1 : number, num2: number): number{
    return num1 + num2;
};
console.log(add(20, 20));

//Never 타입

function throwError(message: string): never{
    throw new Error(message);
}

function infiniteLoop(): never{
    while (true){
        //This function never exits (infinite loop)
    }
}

//Union type

let myVar: string | number;

myVar = "Hello"; //valid assignment
console.log(myVar);

myVar = 42;
console.log(myVar);

//literal types 지정해준 거밖에 못씀
let direction: "left" | "right" | "up" | "down";

//nullable types 정해진 타입의 스트링이나 null 지정 가능
let username: string | null = "glitcher";
let ageEx: number | null = null;

function greetUser(usename: string | null){
    if (usename === null){
        console.log("Hello, Guest!");
    }else if (usename === username){
        console.log(`Hello, ${username}!`);
    }
}

greetUser("glitcher");
greetUser(null);

//type Alias

type myString = string;
let myName: myString = "Glitcher";
type MyStringOrNumber = string | number;
let myValue : MyStringOrNumber = 10;

//another example

type Employee = {

    name : string;
    age : number;
    email?: string;
};

const alice: Employee = {
    name : "Alice",
    age: 30,
    email : "alice@example.com"
};

const bob: Employee = {
    name : "Bob",
    age : 25,
};

console.log(alice);
console.log(bob);

//Combined Type

type FirstType = {

    name: string;
    age: number;
};

type SecondType = {
    address : string,
    phone : string; 
};

type CombinedType = FirstType & SecondType;

const Person: CombinedType = {
    name : "John Doe",
    age : 30,
    address : "123 Main St",
    phone : "123-456-7890",
};

//Array

let fruits: string[] = ["Apple", "Banana", "Cherry"];

for (let i = 0; i < fruits.length; i++){
    console.log(`Fruit: ${fruits[i].toUpperCase()}`);
}

let arr1: number[] = [1,2,3,4,5]; //넘버만 넣을수있음
let arr2: string[] = ["A", "B", "C"];
let arr3: (string | number)[] = [1,2,3,4,"A","B","C"];

//Tuple
//정의
let article :readonly[number, string, boolean] = [11, "Title One", true];

//어사인
article = [12, "Title Two", false];

//article.push(100) 에러뜸

console.log(article);

//튜플 쪼개기
const[id, title, published] = article;
console.log(id);
console.log(title);
console.log(published);