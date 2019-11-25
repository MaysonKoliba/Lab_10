#include "pch.h"
#include "CppUnitTest.h"
#include "..\\Lab10\Graph.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Graph test;

			Assert::IsTrue(test.addEdge(0, 2));
			Assert::IsTrue(test.addEdge(2, 4));
			Assert::IsTrue(test.addEdge(5, 9));

			Assert::IsFalse(test.addEdge(-1, 3));
			Assert::IsFalse(test.addEdge(8, 15));
			Assert::IsFalse(test.addEdge(4, -10));
		}

		TEST_METHOD(TestMethod2)
		{
			Graph test(15);

			Assert::IsTrue(test.addEdge(1, 12));
			Assert::IsTrue(test.addEdge(13, 14));
			Assert::IsTrue(test.addEdge(8, 3));

			Assert::IsFalse(test.addEdge(1, 25));
			Assert::IsFalse(test.addEdge(32, 15));
			Assert::IsFalse(test.addEdge(4, -17));
		}

		TEST_METHOD(TestMethod3)
		{

			Graph test;

			test.addEdge(0, 1);
			test.addEdge(1, 2);
			test.addEdge(3, 4);
			
			Assert::IsTrue(test.removeEdge(0, 1));
			Assert::IsTrue(test.removeEdge(3, 4));
			Assert::IsFalse(test.removeEdge(15, 3));
			Assert::IsFalse(test.removeEdge(2, 1));
		}

		TEST_METHOD(TestMethod4)
		{
			Graph test(20);

			test.addEdge(0, 18);
			test.addEdge(16, 2);
			test.addEdge(12, 6);

			Assert::IsTrue(test.removeEdge(0, 18));
			Assert::IsTrue(test.removeEdge(16, 2));
			Assert::IsFalse(test.removeEdge(-1, 3));
			Assert::IsFalse(test.removeEdge(13, 8));
		}

		TEST_METHOD(TestMethod5)
		{
			Graph test;

			test.addEdge(1, 8);
			test.addEdge(1, 2);
			test.addEdge(3, 4);

			Assert::IsTrue(test.hasEdge(1, 8));
			Assert::IsTrue(test.hasEdge(3, 4));
			Assert::IsFalse(test.hasEdge(12, 7));
			Assert::IsFalse(test.hasEdge(6, 4));
		}

		TEST_METHOD(TestMethod6)
		{
			Graph test(20);

			test.addEdge(2, 19);
			test.addEdge(11, 3);
			test.addEdge(12, 6);

			Assert::IsTrue(test.hasEdge(2, 19));
			Assert::IsTrue(test.hasEdge(11, 3));
			Assert::IsFalse(test.hasEdge(-4, 9));
			Assert::IsFalse(test.hasEdge(13, 8));
		}

		TEST_METHOD(TestMethod7)
		{
			Graph test;

			test.addEdge(3, 8);
			test.addEdge(3, 2);
			test.addEdge(3, 4);
			test.removeEdge(3, 8);

			string output = "2 4 ";
			Assert::AreEqual(output, test.outEdge(3));
		}

		TEST_METHOD(TestMethod8)
		{

			Graph test(30);

			test.addEdge(15, 2);
			test.addEdge(15, 5);
			test.addEdge(15, 12);
			test.removeEdge(15, 5);

			string output = "2 12 ";
			Assert::AreEqual(output, test.outEdge(15));
		}

		TEST_METHOD(TestMethod9)
		{
			Graph test;

			test.addEdge(4, 8);
			test.addEdge(3, 8);
			test.addEdge(5, 8);
			test.removeEdge(3, 8);

			string output = "4 5 ";
			Assert::AreEqual(output, test.inEdge(8));
		}

		TEST_METHOD(TestMethod10)
		{
			Graph test(20);

			test.addEdge(6, 12);
			test.addEdge(8, 12);
			test.addEdge(9, 12);
			test.removeEdge(9, 12);

			string output = "6 8 ";
			Assert::AreEqual(output, test.inEdge(12));
		}

		TEST_METHOD(TestMethod11)
		{
			Graph test;

			//testing the default size of the constructor
			Assert::IsTrue(test.addEdge(0, 9));
			Assert::IsFalse(test.addEdge(0, 10));
		}

		TEST_METHOD(TestMethod12)
		{
			Graph test(30);

			//testing the size of the overloaded constructor
			Assert::IsTrue(test.addEdge(0, 29));
			Assert::IsFalse(test.addEdge(0, 30));
		}
	};
}
