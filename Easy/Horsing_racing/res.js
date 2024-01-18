/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

let tab = [];
let P;
let P2 = 0;
let answer = -1;

const N = parseInt(readline());
for (let i = 0; i < N; i++) {
    const pi = parseInt(readline());
    tab.push(pi);
}

tab = tab.sort(function(a, b)
{
    return (a - b);
});


for (let i = 0; i < tab.length; i++)
{
    if (answer === 1)
        break;
    P = tab[i];
    console.error(`P = ${P}`);
    if (P2 === 0 || P2 < tab[i + 1])
        P2 = tab[i + 1];
    console.error(`P2 = ${P2}`);
    if ((answer === -1 || answer > Math.abs(P - P2)) && Math.abs(P - P2) !== 0)
        answer = Math.abs(P - P2);
    console.error(`answer = ${answer}`);
}

console.log(answer);