#include <iostream>
#include <thread>
#include <Windows.h>
#include <mutex>


//Allow locking and unlocking of threads
std::mutex Locker;

//Function to launch the rockets through locks
void RocketLocker(int x)
{
	Locker.lock();
	Sleep(1000);
	std::cout << "Rocket " << x << " has launched!\n\n";
	Locker.unlock();
}

int main()
{
	std::cout << "\n\n\t**** Welcome to the Mutex Rocket Launcher!! ****\n\n";

	std::cout << "To begin launching the rockets, ";
	system("pause");

	//Call the launches
	std::thread launch1(RocketLocker, 1);
	std::thread launch2(RocketLocker, 2);
	std::thread launch3(RocketLocker, 3);
	std::thread launch4(RocketLocker, 4);
	std::thread launch5(RocketLocker, 5);
	std::thread launch6(RocketLocker, 6);
	std::thread launch7(RocketLocker, 7);
	std::thread launch8(RocketLocker, 8);
	std::thread launch9(RocketLocker, 9);
	std::thread launch10(RocketLocker, 10);

	//Join the threads
	launch1.join();
	launch2.join();
	launch3.join();
	launch4.join();
	launch5.join();
	launch6.join();
	launch7.join();
	launch8.join();
	launch9.join();
	launch10.join();

	std::cout << "\n\nAll rockets have been successfully launched!";


	return 0;
}