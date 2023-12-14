
const n = parseInt(readline());


let loose =  false;
let winrate = 0;
let winIndex = -1; 
let index = 0;
let string = '';
let j = 0;

let trigger = 0;
let stringWin = '';
let win = 0;


let tab = [n]; 

for (let i = 0; i < n ; i++)
{
    const a = readline();
    tab[i] = a;
    console.error(" index: " + i + ": " + tab[i]);
}

console.error("********************************************");
console.error();





while (j < n)
{
    loose = false;
    for (let i = index; i < n && loose === false; i++)
    {
        if (tab[i] === "Paper" && trigger === 0)
        {
            string = "Scissors";
            trigger = 1;
        }
        else if (tab[i] === "Rock" && trigger === 0)
        {
            string = "Paper";
            trigger = 1;
        }
        else if (tab[i] === "Scissors" && trigger === 0)
        {
            string = "Rock";
            trigger = 1;
        }
        if (string === "Scissors")
        {
            if (tab[i] === "Paper")
                win++;
            else if (tab[i] === "Rock")
                loose = true;
        }
        else if (string === "Rock")
        {
            if (tab[i] === "Scissors")
                win++;
            else if (tab[i] === "Paper")
                loose = true;
        }
        else if (string === "Paper")
        {
            if (tab[i] === "Rock")
                win++;
            else if (tab[i] === "Scissors")
                loose = true;
        } 
    }
    if (winrate < win)
    {
        winrate = win;
        winIndex = index;
        stringWin = string;
    }
    j++;
    trigger = 0;
    index++;
    win = 0;
}

console.log(stringWin);
console.log(winIndex);