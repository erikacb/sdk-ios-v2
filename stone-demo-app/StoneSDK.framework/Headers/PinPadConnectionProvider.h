//
//  PinPadConnectionProvider.h
//  StoneSDK
//
//  Created by Stone  on 10/2/15.
//  Copyright © 2015 Stone . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RootProvider.h"

@interface PinPadConnectionProvider : RootProvider

/// Estabilishes session when connected to Pinpad.
- (void)connectToPinpad;

@end
