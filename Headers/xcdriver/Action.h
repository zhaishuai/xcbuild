// Copyright 2013-present Facebook. All Rights Reserved.

#ifndef __xcdriver_Action_h
#define __xcdriver_Action_h

#include <xcdriver/Base.h>

namespace xcdriver {

class Options;

class Action {
private:
    Action();
    ~Action();

public:
    enum Type {
        Build,
        List,
        Version,
        Usage,
        Help,
        License,
        CheckFirstLaunch,
        ShowSDKs,
        Find,
        ExportArchive,
        Localizations,
    };

public:
    static Type
    Determine(Options const &options);

public:
    static std::unique_ptr<pbxbuild::WorkspaceContext>
    CreateWorkspace(Options const &options);
};

}

#endif // !__xcdriver_Action_h
