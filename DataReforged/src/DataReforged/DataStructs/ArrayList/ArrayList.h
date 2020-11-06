#pragma once

//Extra includues
#include <stdio.h>
#include <stdexcept>
#include <iostream>

//Main wrapper for ArrayList

namespace DataReforged
{
	
	template<typename T>
	class ArrayList
	{
	private:
		T* arr;
		int mSize;
		int capacity;

		void resize()
		{
			if (this->capacity == 0) this->capacity = 1;

			T* newarr = new T[2 * this->capacity];
			this->capacity = 2 * this->capacity;

			for (int i = 0; i < this->mSize; i++)
			{
				newarr[i] = arr[i];
			}
			clear();
			delete[] arr;
			arr = newarr;
		}

	public:
		ArrayList() : ArrayList(16) {} //Default constructor

		ArrayList(int initSize)  //Main costructor
		{
			this->arr = new T[initSize];
			this->capacity = initSize;
			this->mSize = 0;
		}

		void push(T data)
		{
			if (this->mSize + 1 > this->capacity) resize();
			
			arr[mSize] = data;
			mSize++;
		}


		T get(int index)
		{
			try
			{

				if (index > this->mSize - 1) throw "IndexOutOfRangeError";
				return arr[index];

			}
			catch (const char* str)
			{
				std::cerr << "An Exception occured: " << str << std::endl;
				return NULL;
			}
		}

		T getLast()
		{
			return arr[this->mSize - 1];
		}

		int size()
		{
			return this->mSize;
		}

		bool isEmpty()
		{
			return this->mSize == 0;
		}

		void clear()
		{
			for (int i = 0; i < this->mSize; i++)
			{
				arr[i] = NULL;
			}
		}



		~ArrayList()
		{
			//printf("Preparing memeory cleanup\n");
			delete[] arr;
			//printf("Memory cleanup succeded\n");

		}
	};
}
