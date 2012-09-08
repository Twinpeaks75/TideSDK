/*
 * Copyright (c) 2008-2010 Appcelerator, Inc. All Rights Reserved.
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

#ifndef Media_h
#define Media_h

#include <map>
#include <vector>
#include <string>

#include <tide/tide.h>

namespace ti {

class Media : public StaticBoundObject {
public:
    Media(ObjectRef);
    virtual ~Media();

private:
    void _CreateSound(const ValueList& args, ValueRef result);
    void _Beep(const ValueList& args, ValueRef result);

    virtual ObjectRef CreateSound(std::string& url) = 0;
    virtual void Beep() = 0;

    ObjectRef global;
};

} // namespace ti

#endif