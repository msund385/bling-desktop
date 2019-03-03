#pragma once

#include <string>

#include <boost/filesystem.hpp>

namespace desktop { namespace core { namespace service {
	class FileIOService
	{
	public:
		FileIOService();
		~FileIOService();

		bool save(const boost::filesystem::path& output, const std::string& content) const;
	};
}}}