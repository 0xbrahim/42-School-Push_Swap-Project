# 42-School-Push_Swap-Project

Summary: This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various
types of algorithms and choose the most appropriate solution (out of many) for an
optimized data sorting.

-  -  - TEST CASES -  -  -  -
        
✔ 1. Basic Usage
Run your program with a basic test:

./push_swap 3 2 1


----
✔ 2. Using Test Cases
Try a fixed, moderately mixed sequence:

ARG="2 1 3 6 5 8"
./push_swap $ARG

⭐ Count the moves:

ARG="2 1 3 6 5 8"
./push_swap $ARG | wc -l


----
✔ 3. Validating Output Using Checker
Use the checker or checker_Mac binary:  	(chmod +x checker_Mac)

ARG="2 1 3 6 5 8"
./push_swap $ARG | ./checker_Mac $ARG


----
✔ 4. No Output Check
Run with no arguments:

./push_swap
✅ Should output nothing, just return to prompt.


----
✔ 5. Manual Checker Test
Test with direct instruction pipe:


./push_swap 2 1 3 | ./checker_Mac 2 1 3

----
✔ 6. Generating Big Numbers Using Ruby

6.1 Shuffle 1 to 500 using Ruby:

ARG=$(ruby -e "puts (1..500).to_a.shuffle.join(' ')")
./push_swap $ARG | ./checker_Mac $ARG


6.2 Loop from size 2 to 15:

for i in {2..15}; do
  ARG=$(ruby -e "puts (1..$i).to_a.shuffle.join(' ')")
  echo "Testing size $i: $ARG"
  ./push_swap $ARG | ./checker_Mac $ARG
  sleep 0.5
done


6.3 Loop with negative numbers from -100 to 100:

for i in {2..20}; do
  ARG=$(ruby -e "puts (-100..100).to_a.shuffle.take($i).join(' ')")
  echo "Testing size $i: $ARG"
  ./push_swap $ARG | ./checker_Mac $ARG
  sleep 0.2
done





