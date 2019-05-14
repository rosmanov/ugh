#include "ugh.h"

const char *ugh_method_string [UGH_HTTP_MAX] = {
	"GET",
	"HEAD",
	"POST",
	"PUT",
	"DELETE",
};

const char *ugh_version_string [UGH_HTTP_VERSION_MAX] = {
	"HTTP/0.9",
	"HTTP/1.0",
	"HTTP/1.1",
};

const char *ugh_status_header [UGH_HTTP_STATUS_MAX] = {
	"200 OK",
	"201 Created",
	"202 Accepted",
	"203 Non-Authoritative Information",
	"204 No Content",
	"205 Reset Content",
	"206 Partial Content",
	"207 Multi-Status",
	"300 Multiple Choices",
	"301 Moved Permanently",
	"302 Moved Temporarily",
	"303 See Other",
	"304 Not Modified",
	"305 Use Proxy",
	"306 unused",
	"307 Temporary Redirect",
	"400 Bad Request",
	"401 Unauthorized",
	"402 Payment Required",
	"403 Forbidden",
	"404 Not Found",
	"405 Not Allowed",
	"406 Not Acceptable",
	"407 Proxy Authentication Required",
	"408 Request Time-out",
	"409 Conflict",
	"410 Gone",
	"411 Length Required",
	"412 Precondition Failed",
	"413 Request Entity Too Large",
	"414 Request-URI Too Large",
	"415 Unsupported Media Type",
	"416 Requested Range Not Satisfiable",
	"417 Expectation Failed",
	"500 Internal Server Error",
	"501 Method Not Implemented",
	"502 Bad Gateway",
	"503 Service Temporarily Unavailable",
	"504 Gateway Time-out",
	"505 HTTP Version Not Supported",
	"506 Variant Also Negotiates",
	"507 Insufficient Storage",
	"429 Too Many Requests",
	"451 Unavailable For Legal Reasons",
};

