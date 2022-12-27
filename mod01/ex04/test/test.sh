# COLOURS
RED="\033[0;31m"
BLUE="\033[0;34m"
GREEN="\033[0;32m"
CYAN="\033[0;36m"
MAGENTA="\033[0;35m"
U_WHITE="\033[4;37m"
RESET="\033[0m"


#TEST 1
echo -e "${GREEN}Test 1:${RESET} Replacing Mai in Dragostea Din Tei with MOMO"
./LoserSed DragosteaDinTei Mai MOMO
echo -e "${U_WHITE}diff DragosteaDinTei DragosteaDinTei.replace${RESET}"
diff DragosteaDinTei DragosteaDinTei.replace

#TEST 2
echo -e "\n${GREEN}Test 2:${RESET} Replacing Zwolle in Opgezwolle with Amsterdam"
./LoserSed Opgezwolle Zwolle Amsterdam
echo -e "${U_WHITE}diff Opgezwolle Opgezwolle.replace${RESET}"
diff Opgezwolle Opgezwolle.replace

#TEST 3: to_replace and new are the same word
echo -e "\n${GREEN}Test 3:${RESET} Replacing Zwolle in Opgezwolle with Zwolle"
./LoserSed Opgezwolle Zwolle Zwolle
echo -e "${U_WHITE}diff Opgezwolle Opgezwolle.replace${RESET}"
diff Opgezwolle Opgezwolle.replace

#TEST 4: to_replace does not occur in file
echo -e "\n${GREEN}Test 4:${RESET} Replacing Schubbekuttersveen in Opgezwolle with Zwolle"
./LoserSed Opgezwolle Schubbekuttersveen Zwolle

echo -e "${U_WHITE}diff Opgezwolle Opgezwolle.replace${RESET}"
diff Opgezwolle Opgezwolle.replace

#TEST 5
echo -e "\n${GREEN}Test 5:${RESET} No arguments"
./LoserSed

#TEST 6
echo -e "\n${GREEN}Test 6:${RESET} Too many arguments"
./LoserSed "Book" "one" "two" "many"

