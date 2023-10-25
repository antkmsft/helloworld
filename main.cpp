#include <iostream>

#include <azure/core/datetime.hpp> // See, I never added Azure Core directly
#include <azure/storage/blobs/block_blob_client.hpp> // Neither the Storage Blobs

int main()
{

	std::cout
		<< "\n\n====\nHere's some DateTime: "
		<< Azure::DateTime(2023, 10, 24).ToString() // Just called two non-inlline functions
		<< "\n====\n\n";

	auto const blobClient = Azure::Storage::Blobs::BlockBlobClient("https://www.microsoft.com"); // Just did the same with storage.
	try
	{
		static_cast<void>(blobClient.Download()); // And again.
	}
	catch (std::exception const& ex)
	{
		std::cout << "\n\n====\nGot the exception thrown, just as expected: " << ex.what() << "\n====\n\n";
	}
}