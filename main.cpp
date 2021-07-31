#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       fish
//  action 1:   the fish swims
fish.swim();
//  action 2:   the fish eats algae
fish.eatAlgae();
//  action 3: the fish dives
fish.dive();
//  2)
//  Noun:       screen
//  action 1:   the screen shows pictures
screen.showPictures();
//  action 2:   the screen flickers
screen.flicker();
//  action 3:   the screen turns black
screen.turnBlack();
//  3)
//  Noun:       apple
//  action 1:   the apple provides vitamins
apple.provideVitamins();
//  action 2:   the apple falls from the tree
apple.fallFromTree();
//  action 3:   the apple causes an allergic reaction
apple.causeAllergicReaction();
//  4)
//  Noun:       water
//  action 1:   the water quenches thirst
water.quenchThirst();
//  action 2:   the water makes the floor slippery
water.makeFloorSlippery();
//  action 3:   the water rises high
water.riseHigh();
//  5)
//  Noun:       plane
//  action 1:   the plane flies
plane.fly();
//  action 2:   the plane carries passengers
plane.carryPassengers();
//  action 3:   the plane crashes
plane.crash();
//  6)
//  Noun:       lighter
//  action 1:   the lighter provides fire
lighter.provideFire();
//  action 2:   the lighter lights a cigarette
lighter.lightCigarette();
//  action 3:   the lighter lights a candle
lighter.lightCandle();
//  7)
//  Noun:       calculator
//  action 1:   the calculator solves a calculation
calculator.solveCalculation();
//  action 2:   the calculator helps students
calculator.helpStudents();
//  action 3:   requires a battery
calculator.requireBattery();
//  8)
//  Noun:       speaker cabinet
//  action 1:   the speaker cabinet receives a signal
speakerCabinet.receieveSignal();
//  action 2:   the speaker cabinet produces sound
speakerCabinet.produceSound();
//  action 3:   the speaker cabinet sounds blown out
speakerCabinet.soundBlownOut();
//  9)
//  Noun:       tire
//  action 1:   the tire turns fast
tire.turnFast();
//  action 2:   the tire turns slow
tire.turnSlow();
//  action 3: the tire expldoes
tire.explode();
//  10)
//  Noun:       dog
//  action 1:   the dog runs
dog.run();
//  action 2:   the dog plays fetch
dog.playFetch();
//  action 3:   the dog barks
dog.bark();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
