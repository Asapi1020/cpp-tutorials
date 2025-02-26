#include <iostream>
#include <vector>
#include <string>

int main() {
	std::cout << "Welcome to TODO list" << std::endl;
	std::vector<std::string> todoList;

	while (true) {
		std::cout << "\nMenu" << std::endl;
		std::cout << "1. Add task" << std::endl;
		std::cout << "2. Show tasks" << std::endl;
		std::cout << "3. Delete task" << std::endl;
		std::cout << "4. Exit" << std::endl;
		std::cout << "Enter your choice: ";

		int choice;
		std::cin >> choice;

		switch (choice) {
			case 1: {
				std::cin.ignore();
				std::cout << "Enter a task to add";
				std::string task;
				std::getline(std::cin, task);
				todoList.push_back(task);
				std::cout << "Task added successfully" << std::endl;
				break;
			}
			case 2: {
				if (todoList.empty()) {
					std::cout << "No tasks to show" << std::endl;
				}
				else {
					std::cout << "Tasks:" << std::endl;
					for (int i = 0; i < todoList.size(); i++) {
						std::cout << i + 1 << ". " << todoList[i] << std::endl;
					}
				}
				break;
			}
			case 3: {
				if (todoList.empty()) {
					std::cout << "No tasks to delete" << std::endl;
				}
				else {
					std::cout << "Enter the task number to delete: ";
					int taskNumber;
					std::cin >> taskNumber;
					if (taskNumber < 1 || taskNumber > todoList.size()) {
						std::cout << "Invalid task number" << std::endl;
					}
					else {
						todoList.erase(todoList.begin() + taskNumber - 1);
						std::cout << "Task deleted successfully" << std::endl;
					}
				}
				break;
			}
			case 4: {
				std::cout << "Exiting..." << std::endl;
				return 0;
			}
			default: {
				std::cout << "Invalid choice" << std::endl;
			}
		}
	}
	return 0;
}