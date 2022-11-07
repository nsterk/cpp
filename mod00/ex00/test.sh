# COLOURS
RED="\033[0;31m"
BLUE="\033[0;34m"
GREEN="\033[0;32m"
RESET="\033[0m"

megaphone="./megaphone"

# NO ARGUMENT
echo -e "${GREEN}No arguments:${RESET}"
echo -ne "${BLUE}output: ${RESET}" 
"$megaphone"

# ONE LOWERCASE ARGUMENT
echo -e "\n${GREEN}One lowercase argument:${RESET}"
echo -e "${BLUE}input: ${RESET}" "\"this is all lowercase\""
echo -ne "${BLUE}output: ${RESET}" 
"$megaphone" "this is all lowercase"

# MULTIPLE LOWERCASE ARGS
echo -e "\n${GREEN}Multiple lowercase arguments:${RESET}"
echo -e "${BLUE}input: ${RESET}" "\"this is all lowercase!\"" "\" so is this!\" \" 1 moar!\""
echo -ne "${BLUE}output: ${RESET}" 
"$megaphone" "this is all lowercase!" " so is this!" " 1 moar!"
echo "----------------------------------------------------------------"
echo -e "${BLUE}input: ${RESET}" "\"hello is this thing on? \" \" well? \" \" is it?!_ \""
echo -ne "${BLUE}output: ${RESET}" 
"$megaphone" "hello is this thing on? " " well? " " is it?!_ "

# UPPERCASE ARGS
echo -e "\n${GREEN}Multiple uppercase arguments:${RESET}"
echo -e "${BLUE}input: ${RESET} \"IS U&^PPERCASE \" \"THIS TOO \" \"ALREADY UPPER\""
echo -ne "${BLUE}output: ${RESET}" 
"$megaphone" "IS U&^PPERCASE " "THIS TOO " "ALREADY UPPER"

#MIXED UPPER & LOWER ARGS
echo -e "\n${GREEN}Mixed upper and lowercase arguments:${RESET}"
echo -e "${BLUE}input: ${RESET}" "\"iS M1xEeed  \" \"this isn't  \" \"BuT ThiS iS  \""
echo -ne "${BLUE}output: ${RESET}" 
"$megaphone" "iS M1xEeed  " "this isn't  " "BuT ThiS iS  "

