#pragma once
#define MINT_H

#include <ostream>
#include <istream>




class Mint
{
public:
	explicit Mint(int x = 0) :mx{ x } {}

	friend std::ostream& operator<<(std::ostream& os, const Mint& mint)
	{
		os << mint.mx;
		//os.operator<<(mint.mx)	// �stteki kod buna e�it 


		return os;
	};

	friend  std::istream& operator>>(std::istream& is, Mint& mint)
	{
		return is >> mint.mx;

	};

private:
	int mx;

};

