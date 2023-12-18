/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

var inputs = readline().split(' ');
const L = parseInt(inputs[0]);
const C = parseInt(inputs[1]);
const N = parseInt(inputs[2]);

console.error('nombre de places :' + L);
console.error('nombre de tours: ' + C);
console.error('nombre de groupe: ' + N);
console.error('**************************');

let answer = 0;
let place =  0 ;
let tab = []
let count = 0;
let i = 0;
let count2 = 0;

//CREATION DU TABLEAU

for (let i = 0; i < N; i++) {
    const pi = parseInt(readline());
    tab.push(pi);
}

while (count < C)
{
    let range = i;
    while (place + tab[i] <= L && count2 != N)
    {
        answer += tab[i];
        place += tab[i];
        i++;
        count2++;
        console.error('place: ' + place);              
    }
    for (let j = range; j < i; j++)
    {
        tab.push(tab[j]);
    }
    console.error('resultat: ' + answer);
    count++;
    place = 0;
    count2 = 0;
}

//Dernier test ne passe pas , delai trop long ! 



// Write an answer using console.log()
// To debug: console.error('Debug messages...');

console.log(answer);