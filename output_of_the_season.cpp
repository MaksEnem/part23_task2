#include <iostream>

#if defined SPRING
#define SEASON "spring"

#elif defined SUMMER
#define SEASON "summer"

#elif defined AUTUMN
#define SEASON "autumn"

#elif defined WINTER
#define SEASON "winter"

#else
#define WINTER
#define SEASON "winter"
#endif
int main()
{
	std::cout << SEASON;
}
