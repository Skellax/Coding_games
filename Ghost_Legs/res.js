const [W, H] = readline().split(' ').map(Number);
var matrice = Array.from({length: H},x => readline().split(''));

let j = 0; 

while (j <= W)
{
    let i = 0;
    let result = matrice[i][j];
    let col = j;
    while (i < H - 1)
    {
        if (col-1 > 0 && matrice[i][col - 1] == '-' ){
            col -= 3;
        } else if (col + 1 <= W && matrice[i][col + 1] == '-')
            col += 3;
        i++;
            
    }
    result += matrice[i][col];
    console.log(result);
    j+= 3;
}









// Write an answer using console.log()
// To debug: console.error('Debug messages...');