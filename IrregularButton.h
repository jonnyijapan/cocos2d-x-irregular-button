/*
 * =====================================================================================
 *
 *       Filename:  IrregularButton.h
 *
 *    Description:  1.1: Updated to work with Cocos2d-x 3.10.
 *
 *        Version:  1.1
 *        Created:  2014/10/29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Shuai Yuan (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef __IRREGULAR_BUTTON_H__
#define __IRREGULAR_BUTTON_H__ 

#include "cocos2d.h"
#include "ui/CocosGUI.h"

/*
 * =====================================================================================
 *        Class:  IrregularButton
 *  Description:  
 * =====================================================================================
 */
class IrregularButton : public cocos2d::ui::Button
{
    public:
        /* ====================  LIFECYCLE     ======================================= */
        IrregularButton ();                                     /* constructor      */
        virtual ~IrregularButton ();                            /* destructor       */

        static IrregularButton* create();
        static IrregularButton* create(const std::string& normalImage,
                const std::string& selectedImage = "",
                const std::string& disableImage = "",
                cocos2d::ui::Widget::TextureResType texType = cocos2d::ui::Widget::TextureResType::LOCAL);

        /* ====================  ACCESSORS     ======================================= */

        /* ====================  MUTATORS      ======================================= */

        /* ====================  OPERATORS     ======================================= */

		virtual bool hitTest(const cocos2d::Vec2 &pt, const cocos2d::Camera* camera, cocos2d::Vec3 *p) const override;
    protected:
        virtual bool init() override;
        virtual bool init(const std::string& normalImage,
                const std::string& selectedImage = "",
                const std::string& disableImage = "",
                cocos2d::ui::Widget::TextureResType texType = cocos2d::ui::Widget::TextureResType::LOCAL) override;
        void loadNormalTransparentInfo();
        void loadNormalTransparentInfoFromFile();
        bool getIsTransparentAtPoint(cocos2d::Vec2 point) const;

        /* ====================  DATA MEMBERS  ======================================= */

    private:
        /* ====================  DATA MEMBERS  ======================================= */
        int normalImageWidth_;
        int normalImageHeight_;
        bool* normalTransparent_;

}; /* -----  end of class IrregularButton  ----- */


#endif /* __IRREGULAR_BUTTON_H__ */
