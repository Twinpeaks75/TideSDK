/*
 * Copyright (c) 2009-2010 Appcelerator, Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef HTTPServerRequest_h
#define HTTPServerRequest_h

#include <tide/tide.h>
#include <Poco/Net/HTTPServerRequest.h>

namespace ti {

class HTTPServerRequest : public StaticBoundObject {
public:
    HTTPServerRequest(Poco::Net::HTTPServerRequest& request);

private:
    void GetMethod(const ValueList& args, ValueRef result);
    void GetVersion(const ValueList& args, ValueRef result);
    void GetURI(const ValueList& args, ValueRef result);
    void GetContentType(const ValueList& args, ValueRef result);
    void GetContentLength(const ValueList& args, ValueRef result);
    void GetHeader(const ValueList& args, ValueRef result);
    void GetHeaders(const ValueList& args, ValueRef result);
    void HasHeader(const ValueList& args, ValueRef result);
    void Read(const ValueList& args, ValueRef result);

    Poco::Net::HTTPServerRequest& request;
};

} // namespace ti

#endif