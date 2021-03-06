/**
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include <string>

class SimpleTokenizer 
{
	public:
		static const std::string DELIMITERS;

		SimpleTokenizer(const std::string& str);
		SimpleTokenizer(const std::string& str, const std::string& delimiters);
		SimpleTokenizer(const std::string& s, const std::string& delimiters, bool ktokens);

		bool nextToken();
		bool nextToken(const std::string& delimiters);
		bool nextToken_K(const std::string& delimiters);
		bool nextToken_notK(const std::string& delimiters);

		bool keepDelimiters(bool k);

		const std::string getToken() const;
		void reset();
    
    	protected:
		size_t offset;
		const std::string string;
		std::string token;
		std::string delimiters;
		bool keep_delimiters;
		bool last_was_delimiter;
};
