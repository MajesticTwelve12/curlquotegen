#include <curl/curl.h>
#include <cstdio>
#include <string>

#pragma once
void curlexample()
{
	CURL *curl = curl_easy_init();
	if(curl)
	{
		CURLcode res;
		curl_easy_setopt(curl, CURLOPT_URL,"https://quotescover.com/the-quotes");
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
}
int main()
{
	curlexample();
	printf("\n");
	return EXIT_SUCCESS;
}
