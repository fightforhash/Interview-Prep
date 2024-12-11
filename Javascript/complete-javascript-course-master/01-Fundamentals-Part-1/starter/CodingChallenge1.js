let massMark = 78;
let heightMark = 1.69;
let massJohn = 92;
let heightJohn = 1.95;

let BMIMark = massMark / (heightMark * heightMark);
let BMIJohn = massJohn / (heightJohn * heightJohn);

let markHigherBMI;
if (BMIMark > BMIJohn){
    markHigherBMI = true;
}

console.log(BMIMark);
console.log(BMIJohn);

if (markHigherBMI){
    console.log("Mark's BMI" + "(" + BMIMark +")"+ " is higher than John's!" + "(" + BMIJohn +")")
}