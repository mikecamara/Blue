//
//  XYZFirstViewController.h
//  Blue
//
//  Created by Mike Camara on 30/09/2014.
//  Copyright (c) 2014 Mikecamara. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZFirstViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *txtMessage;
@property (weak, nonatomic) IBOutlet UITextView *tvChat;


- (IBAction)sendMessage:(id)sender;
- (IBAction)cancelMessage:(id)sender;



@end
