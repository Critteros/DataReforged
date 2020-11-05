#pragma once

namespace DataReforged
{
	template<typename T>
	class ArrayList
	{
	public:
		ArrayList(T aSize)
		{
			mSize = aSize;
		}

		T size()
		{
			return mSize;
		}


	private:
		T mSize;

	};
}
