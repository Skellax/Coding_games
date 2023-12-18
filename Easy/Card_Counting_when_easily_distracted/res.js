const streamOfConsciousness = readline();

let DeckCards = {
    ace: 4,
    two: 4,
    three: 4,
    four: 4,
    five: 4,
    six: 4,
    seven: 4,
    height: 4,
    nine: 4,
    ten: 16,
};

let tab = streamOfConsciousness.split('.');

function validateString(s1) {
    for (let i = 0; i < s1.length; i++) {
        if (!(s1[i] >= '2' && s1[i] <= '9') && !(s1[i] === 'T' || s1[i] === 'J' || s1[i] === 'Q' || s1[i] === 'K' || s1[i] === 'A')) {
            return false;
        }
    }
    return true;
}

for (let i = 0; i < tab.length; i++) {
    if (validateString(tab[i])) {
        for (let j = 0; j < tab[i].length; j++)
        {
            if (tab[i][j] === '2')
                DeckCards.two -= 1;
            else if (tab[i][j] === '3')
                DeckCards.three -= 1;
            else if (tab[i][j] === '4')
                DeckCards.four -= 1;
            else if (tab[i][j] === '5')
                DeckCards.five -= 1;
            else if (tab[i][j] === '6')
                DeckCards.six -= 1;
            else if (tab[i][j] === '7')
                DeckCards.seven -= 1;
            else if (tab[i][j] === '8')
                DeckCards.height -= 1;
            else if (tab[i][j] === '9')
                DeckCards.nine -= 1;
            else if (tab[i][j] === 'T' || tab[i][j] === 'J' || tab[i][j] === 'Q' || tab[i][j] === 'K')
                DeckCards.ten -= 1;
            else if (tab[i][j] === 'A')
                DeckCards.ace -= 1;
        }
        console.error(tab[i]); 
    }
}

console.error('************************************');

const bustThreshold = parseInt(readline());
let leftCards = 0;
let win = 0;
let j = 1;

for (let deck in DeckCards) 
{
    console.error(DeckCards[deck]);
    if (DeckCards[deck] > 0)
    {
        while (DeckCards[deck] > 0)
        {
            if (j < bustThreshold)
            {
                win++;
                leftCards++;
                DeckCards[deck] -= 1;

            }
            else
            {
                leftCards++
                DeckCards[deck] -= 1;
            }
        }
    }
    j++;   
}


let percentWinrate = (win / leftCards) * 100;
percentWinrate = percentWinrate.toFixed();

console.log(percentWinrate + '%');
