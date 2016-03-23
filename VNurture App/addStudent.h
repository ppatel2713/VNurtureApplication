//
//  AddStudent.h
//  VNurture App
//
//  Created by Prachi on 21/03/16.
//  Copyright (c) 2016 Appuno IT Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddStudent : UIViewController<UITextViewDelegate>

@property (weak, nonatomic) IBOutlet UILabel *labelAddress;
@property (weak, nonatomic) IBOutlet UITextView *textViewAddress;



@end
