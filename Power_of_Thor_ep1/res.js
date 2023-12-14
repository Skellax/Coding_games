/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

var inputs = readline().split(' ');
const lightX = parseInt(inputs[0]); // the X position of the light of power
const lightY = parseInt(inputs[1]); // the Y position of the light of power
const initialTx = parseInt(inputs[2]); // Thor's starting X position
const initialTy = parseInt(inputs[3]); // Thor's starting Y position
var Tx = parseInt(inputs[2]);
var Ty = parseInt(inputs[3]);

// game loop
while (true) {
    const remainingTurns = parseInt(readline()); // The remaining amount of turns Thor can move. Do not remove this line.

    // Write an action using console.log()
    // To debug: console.error('Debug messages...');
    console.error('pos X: '+Tx);
    console.error('pos Y:  '+Ty);


    // A single line providing the move to be made: N NE E SE S SW W or NW
    
    if (Tx < lightX && Ty === lightY)
    {
        console.log('E');
        Tx += 1;
    }
    if (Tx > lightX && Ty === lightY)
    {
        console.log('W');
        Tx -= 1
    }
    if (Ty < lightY && Tx === lightX)
    {
        console.log('S');
        Ty += 1

    }
    if (Ty > lightY && tX == lightX)
    {
        console.log('N');
        Ty -= 1;
    }
    if (Tx < lightX && Ty < lightY)
    {
        console.log('SE');
        Tx += 1;
        Ty += 1;
    }
    if (Tx < lightX && Ty > lightY)
    {
        console.log('Ne');
        Tx += 1;
        Ty -= 1;
    }
    if (Tx > lightX && Ty < lightY && Ty != -18)
    {
        console.log('SW');
        Tx -= 1;
        Ty += 1;
    }
    if (Tx > lightX && Ty > lightY)
    {
        console.log('NW')
        Tx -= 1;
        Ty -= 1;
    }
}
