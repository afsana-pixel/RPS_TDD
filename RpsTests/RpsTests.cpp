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
			const char* result = analyzeRPS("Rock", "Scissors");
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(Test_Player2_Wins)
		{
			const char* result = analyzeRPS("Scissors", "Rock");
			Assert::IsTrue(strcmp(result, "Player2") == 0);
		}

		TEST_METHOD(Test_Draw)
		{
			const char* result = analyzeRPS("Paper", "Paper");
			Assert::IsTrue(strcmp(result, "Draw") == 0);
		}
	};
}
