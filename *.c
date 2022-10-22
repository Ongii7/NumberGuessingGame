/**
 * while number is less than 4 or more than 0, keep running the program
 * display a menu for the user prompting numbers 1-3.
 * Scenario 1:
 * if 1 is selected then ask user to enter number
 * while user's number does not match the number they are supposed to guess,
 * let them know if their number was too high/low and let them enter another number.
 * if they enter q instead of number go to the end of the program and restart the loop.
 * else if they match the number send them a win message.
 * Scenario 2:
 * if 2 is selected then tell user the max value they can set the number,
 * while the value is over the max or negative, let them know it is a wrong value and keep prompting the question.
 * once they do go to the end of the program and restart the loop.
 * Scenario 3:
 * if 3 is selected then thank the user for playing the game and exit the loop, ending the program.
 * 
 * Finally, create a new branch save_user_max_number
 * create a static max value for the user's max number so the program remembers it the next time it starts.
 * */