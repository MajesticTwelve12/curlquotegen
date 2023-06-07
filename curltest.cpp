#include <curl/curl.h>
#include <iostream>
#include <string>

void curlexample()
{
	CURL *curl = curl_easy_init();
	if(curl)
	{
		CURLcode res;
		curl_easy_setopt(curl, CURLOPT_URL, "https://www.google.ca");
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
}
int main()
{
	curlexample();
	return EXIT_SUCCESS;
}
