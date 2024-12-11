let js = 'amazing';
if (js === 'amazing') alert('JavaScript is FUN!');

40 + 8 + 23 - 10;
console.log(40 + 8 + 23 - 10);

console.log("Jonas");
console.log(23);

let firstName = "Bob";
let PI = 3.1415; 

console.log(firstName);

// 그리고 아는것들 반복 건너뜀.

//Assignment

let country = 50;
let continent = 30;
let population = 2000;

console.log(country);
console.log(continent);
console.log(population);

true;

let javascriptIsFun = true;
console.log(javascriptIsFun);
console.log(typeof(true));

//Truthy and falsy values

console.log(Boolean(0));
console.log(Boolean(undefined));
console.log(Boolean('Jonas'));
console.log(Boolean({}));
console.log(Boolean(""));

const favorite = prompt("Whats your favorite number?");
console.log(favorite)
console.log(typeof favorite);

if (favorite == 23){
    console.log("Cool! 23 is an amazing number!");
} else if (favorite === 7){
    console.log('7 is also a cool number');
} else if (favorite === 9){
    console.log('9 is also cool number')
}else{
    console.log("Number is not 23 or 7 or 9");
}

if (favorite !== 23) console.log("Why not 23?");

// Boolean logic

const hasDriversLicense = true;
const hasGoodVision = false;

console.log(hasDriversLicense && hasGoodVision);
console.log(hasDriversLicense || hasGoodVision);
console.log(!hasDriversLicense);

const shouldDrive = hasDriversLicense && hasGoodVision && !isTired;;

/*
if(shouldDrive){
    console.log("Sarah is able to Drive!");
}else{
    console.log("Someone else should drive...");
}
*/

const isTired = true; // C
console.log(hasDriversLicense && hasGoodVision  && isTired);

if(shouldDrive){
    console.log("Sarah is able to Drive!");
}else{
    console.log("Someone else should drive...");
}

//Coding Challenge 3
//파일로해결

//switch statements

const day = 'wednesday';

switch(day){
    case 'monday': // day === 'monday'
        console.log("Plan course structure");
        console.log("Go to coding meetup");
        break;
    case 'tuesday':
        console.log('Prepare theory videos');
        break;
    case 'wednesday':
    case 'thursday':
        console.log("Write code examples");
        break;
    default:
        console.log("Not a valid day!");
}

3 + 4
1991
true && false && !false

if (23 > 10){
    const str = "23 is bigger";
}
const me = "Jonas";
console.log(`I'm ${2037 - 1991} "years old" ${me}`);