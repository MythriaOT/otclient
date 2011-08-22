#ifndef UILABEL_H
#define UILABEL_H

#include "uiwidget.h"

class UILabel : public UIWidget
{
public:
    UILabel();

    static UILabelPtr create();

    virtual void onStyleApply(const OTMLNodePtr& styleNode);
    virtual void render();

    void resizeToText();

    void setText(const std::string& text) { m_text = text; }
    void setAlign(AlignmentFlag align) { m_align = align; }

    std::string getText() const { return m_text; }
    AlignmentFlag getAlign() const { return m_align; }

private:
    std::string m_text;
    AlignmentFlag m_align;
};

#endif
