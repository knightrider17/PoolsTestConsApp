#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>

#include <vector>

using namespace std;


#define SOLUTION_BICYCLE 0
#define SOLUTION_STL	 1 

// »спользуйте следующие типы дл¤ IP-адресов, диапазонов и пулов:
using IPAddress = uint32_t; 				// јдрес IPv4 представлен целочисленным типом uint32_t
using Range = pair<IPAddress, IPAddress>;	// ƒиапазон IP-адресов, границы включены
using Pool = vector<Range>;					// стоит подумать о выборе оптимального STL-котейнера дл¤ хранени¤ диапазонов IP-адресов (Range)
//using Pool = ; // ? // 
											// ƒиапазоны IP-адресов в пулах могут пересекатьс¤. ѕор¤док их расположени¤ в пуле - произвольный.

										// ‘ункци¤, вычисл¤юща¤ разницу между старым и новым пулами:
										// `old_pool` - старый пул IP-адресов
										// `new_pool` - новый  пул IP-адресов
										// return value - пул диапазонов "устаревших" IP-адресов



