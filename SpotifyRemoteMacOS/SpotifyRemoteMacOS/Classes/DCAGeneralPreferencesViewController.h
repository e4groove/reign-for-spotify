//
//  DCBLPreferencesViewController.h
//  Borg
//
//  Created by Boy van Amstel on 01-08-12.
//  Copyright (c) 2012 Danger Cove. All rights reserved.
//

#import "MASPreferencesViewController.h"

#import "StartAtLoginController.h"

@interface DCAGeneralPreferencesViewController : NSViewController <MASPreferencesViewController> {
    IBOutlet NSButton *launchAtStartupItem;
    StartAtLoginController *_startAtLoginController;
}

@end
