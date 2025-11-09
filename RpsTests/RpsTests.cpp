#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../RpsLib/rps.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RpsTests
{
	TEST_CLASS(RpsTests)
	{
	public:
		
		TEST_METHOD(Test_Invalid_Player1)
		{
			const char* result = analyzeRPS("rock", "Paper");
			Assert::AreEqual("Invalid", result);
		}
	};
}
