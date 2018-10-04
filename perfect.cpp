/*** Don't change any text below */
// Important announcement on Significance of Academic Honor Policy
// The  Academic Honor Policy is an important aspect of keeping the integrity
// and quality of the computer science courses in general. Please don't share
// your project source with any other students on any occasion. I would like
// to let you know that, for the summer 2018 COP3014 course, we found several
// students violated the Academic Honor Policy by sharing their programming
// assignment source in an advertent and inadvertent manners. Please note that
// we will run MOSS" (plagiarism detection software tool) on future COP3014 student
// project submissions together with your summer 2018 project" submissions.
// In case your project source code happens to be >%75" similar to future student
// project source (which is statistically" almost impossible), your grade will
// be invalidated and your academic honor code violation will be reported to Dean's
// office. The following is the quick reference for Academic Honor Policy:"
// https://fda.fsu.edu/sites/g/files/upcbnu636/files/Media/Files/Academic%20Honor%20Policy/AHP%20Quick%20Reference%20Guide%20Nov%202017.pdf
//

/* A perfect number is a positive integer greater than 1 that is equal to the sum of
 * the positive integer numbers, including 1 but not including itself, that evenly
 * divide into it. First, you should prompt the  user for a number. Next, you should
 * indicate if the number is a perfect number or not. Finally, you should list the
 * numbers that evenly divide into the number entered and the sum of these numbers
 * as an equation.  Afterwards, start the process again by prompting the user for
 * another number. You should stop the execution when the user enters a number that
 * is not greater than 1. You are required to use at least one while loop and at least
 * one for loop. Below are examples of perfect and imperfect numbers.
 *
 */

#include <iostream>
using namespace std;

int main() {

    // Prompt the user for a number.
    cout << "Enter an integer number (1 or less to quit): " << flush;
    int n;
    cin >> n;

    // Continue while n is greater than 1.
    while (n > 1) {

        // task 1: Determine whether the numbers that evenly divide the
        // number that has been entered and calculate their
        // sum - use either for or while loop
        // your implementation below:



        cout << endl;
        // task 2: Report whether or not the number is perfect.
        // your implementation below





        // task 3: Now print the numbers that evenly divide the
        // number that has been entered and their sum
        // as an equation - use either for or while loop
        // Please note if you use for loop for the task 1, then you
        // must use while loop for task 3 (and vice versa).
        // your implementation below:




        // Prompt the user for another number.
        cout << "Enter an integer number (1 or less to quit): " << flush;
        cin >> n;
    }
    return 0;
}