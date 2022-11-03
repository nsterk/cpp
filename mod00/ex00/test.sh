# COLOURS
RED="\033[0;31m"
BLUE="\033[0;34m"
GREEN="\033[0;32m"
RESET="\033[0m"

megaphone="./megaphone"

# NO ARGUMENT
echo -e "${GREEN}No arguments:${RESET}"
echo -e "./megaphone"
"$megaphone"

# ONE LOWERCASE ARGUMENT
echo -e "${GREEN}One lowercase argument:${RESET}"
echo -e "./megaphone" "\"this is all lowercase\""
"$megaphone" "this is all lowercase"

# MULTIPLE LOWERCASE ARGS
echo -e "${GREEN}Multiple lowercase arguments:${RESET}"
echo -e "./megaphone" "\"this is all lowercase!\"" "\" so is this!\" \" 1 moar!\""
"$megaphone" "this is all lowercase!" " so is this!" " 1 moar!"
echo -e "./megaphone \"hello is this thing on? \" \" well? \" \" is it?!_ \""
"$megaphone" "hello is this thing on? " " well? " " is it?!_ "

# UPPERCASE ARGS
echo -e "${GREEN}Multiple uppercase arguments:${RESET}"
echo "./megaphone \"*IS UPPERCASE* \" \"*THIS TOO* \" \"*ALREADY UPPER*\""
"$megaphone" "*IS UPPERCASE* " "*THIS TOO* " "*ALREADY UPPER*"

#MIXED UPPER & LOWER ARGS
echo -e "${GREEN}Mixed upper and lowercase arguments:${RESET}"
echo "./megaphone \"*iS M1xEeed* \" \"*this isn't* \" \"*BuT ThiS iS*\""
"$megaphone" "*iS M1xEeed* " "*this isn't* " "*BuT ThiS iS*"

