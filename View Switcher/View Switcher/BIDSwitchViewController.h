//
//  BIDSwitchViewController.h
//  View Switcher
//
//  Created by Maria Alice C. Lim on 9/12/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BIDYellowViewController;
@class BIDBlueViewController;


@interface BIDSwitchViewController : UIViewController

@property(strong,nonatomic) BIDYellowViewController *yellowViewController;
@property(strong,nonatomic) BIDBlueViewController *blueViewController;

-(IBAction)switchViews:(id)sender;
@end
