//
//  DataManager.h
//  SimpleSample-chat_users-v2-ios
//
//  Created by Glebus on 04.04.13.
//  Copyright (c) 2013 Quickblox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataManager : NSObject<QBActionStatusDelegate, QBChatDelegate>

+ (id)manager;

@property (nonatomic, strong) QBUUser *currentUser;
@property (nonatomic, strong) NSArray *rooms;

@end