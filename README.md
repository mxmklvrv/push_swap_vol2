# push_swap

push_swap_swap_push

ARG=$(shuf -i 1-1000 -n 500 | tr '\n' ' '); ./push_swap $ARG | wc -l

ARG=$(shuf -i 1-1000 -n 500 | tr '\n' ' '); ./push_swap $ARG | ./checker_linux $ARG

ARG=$(seq -800 70000 | shuf -n 500 | paste -sd ' ' -); ./push_swap $ARG | wc -l
