#include "PmergeMe.hpp"

int	main(int argc, char **argv) {

	if (argc < 3) {
		std::cout << "Error: PmergeMe takes a minimum of two integers as input" << std::endl;
		return (0);
	}

	std::string	rawInput;
	for (int i = 1; i < argc; i++) {
		for (size_t j = 0; j < std::strlen(argv[i]); j++) {
			if (!isdigit(argv[i][j])) {
				std::cout << "Error: input contains non-numerical characters" << std::endl;
				return (0);
			}
		}
		rawInput.append(argv[i]);
		rawInput.append(" ");
	}

	try {
		PmergeMe<std::vector> mergeVec(rawInput);
		PmergeMe<std::list> mergeList(rawInput);

		std::cout << "Before:	" << rawInput << std::endl;
		std::cout << "After:	";
		printList(mergeVec.getContainer());
		std::cout << "Time to process a range of " << (argc - 1) << " elements with " << GRN << "std::vector" << RST <<  " : " << GRN << mergeVec.elapsed.count() << RST << " microseconds" << std::endl;
		std::cout << "Time to process a range of " << (argc - 1) << " elements with " << RED << "std::list" << RST << "   : " << RED << mergeList.elapsed.count() << RST << " microseconds" << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
		return (0);
	}

	return (0);
}