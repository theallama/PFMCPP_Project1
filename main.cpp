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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: baby
//  action 1: the baby cries
baby.cry();
//  action 2: the baby eats
baby.eat();
//  action 3: the baby sleeps
baby.sleep();
//  2)
//  Noun: cat
//  action 1: the cat meows
cat.meow();
//  action 2: the cat purrs
cat.purr();
//  action 3: the cat sleeps
cat.sleep();
//  3)
//  Noun: bird
//  action 1: the bird sings
bird.sing();
//  action 2: the bird flies
bird.fly();
//  action 3: the bird eats worms
bird.eatWorm();
//  4)
//  Noun: software
//  action 1: the software crashes
software.crash();
//  action 2: the software runs
software.run();
//  action 3: the software initiates an update
software.initiateUpdate();
//  5)
//  Noun: robot
//  action 1: the robot walks;
robot.walk();
//  action 2: the robot hugs;
robot.hug();
//  action 3: the robot reads a book;
robot.readBook();
//  6)
//  Noun: fingers
//  action 1: the fingers bend
fingers.bend();
//  action 2: the fingers play the keys
fingers.playKeys();
//  action 3: the fingers turn on the light switch
fingers.turnOnLightSwitch();
//  7)
//  Noun: person
//  action 1: the person sits
person.sit();
//  action 2: the person watches tv
person.watchTv();
//  action 3: the person falls asleep
person.fallAsleep();
//  8)
//  Noun: bufferfly
//  action 1: the butterfly flies
butterfly.fly();
//  action 2: the butterfly polinates
butterfly.polinate();
//  action 3: the butterfly hides
butterfly.hide();
//  9)
//  Noun: Shoppping cart
//  action 1: the shopping cart rolls down the hill
shoppingCart.rollDownTheHill();
//  action 2: the shopping cart hold groceries
shoppingCart.holdGroceries();
//  action 3: the shopping cart stops moving
shoppingCart.stopMoving();
//  10)
//  Noun: child
//  action 1: the child drinks water
child.drinkWater();
//  action 2: the child rides a bike
child.rideBike();
//  action 3: the child eats dinner
child.eatDinner();


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
