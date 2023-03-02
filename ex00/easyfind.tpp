#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &tmp, int value)
{
	typename T::iterator it = (std::find(tmp.begin(), tmp.end(), value));
		if (it == tmp.end())
		{
			throw std::runtime_error("value not found");
		}
		return (it);
}


/* std::runtime_errorは、実行時に発生するエラーを表す標準ライブラリの例外クラスです。
この例外は、プログラムの実行中にエラーが発生した場合にスローされます。
例えば、メモリ不足、ファイルが存在しない、ユーザー入力が正しくない場合など、
プログラムが実行中に発生する予期せぬエラーを表す場合に使用されます。 */