#ifndef NODES2CELLID_HPP
#define NODES2CELLID_HPP

#include <node.h>
#include <nan.h>
#include "s2cellid.h"

class CellId : public node::ObjectWrap {
public:
    static v8::Persistent<v8::FunctionTemplate> constructor;
    static void Init(v8::Handle<v8::Object> target);
    inline S2CellId get() { return this_; }
    static v8::Handle<v8::Value> New(const S2CellId c);

protected:
    CellId();

    static v8::Handle<v8::Value> New(const v8::Arguments& args);

    S2CellId this_;
};

#endif
