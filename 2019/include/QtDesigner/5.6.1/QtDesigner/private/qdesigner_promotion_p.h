/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the Qt Designer of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
****************************************************************************/

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of Qt Designer.  This header
// file may change from version to version without notice, or even be removed.
//
// We mean it.
//

#ifndef QDESIGNERPROMOTION_H
#define QDESIGNERPROMOTION_H

#include "shared_global_p.h"

#include <QtDesigner/QDesignerPromotionInterface>

QT_BEGIN_NAMESPACE

class QDesignerFormEditorInterface;

namespace qdesigner_internal {

    class  QDESIGNER_SHARED_EXPORT  QDesignerPromotion : public QDesignerPromotionInterface
    {
    public:
        explicit QDesignerPromotion(QDesignerFormEditorInterface *core);

        PromotedClasses promotedClasses() const Q_DECL_OVERRIDE;

        QSet<QString> referencedPromotedClassNames() const Q_DECL_OVERRIDE;

        virtual bool addPromotedClass(const QString &baseClass,
                                      const QString &className,
                                      const QString &includeFile,
                                      QString *errorMessage) Q_DECL_OVERRIDE;

        bool removePromotedClass(const QString &className, QString *errorMessage) Q_DECL_OVERRIDE;

        bool changePromotedClassName(const QString &oldclassName, const QString &newClassName, QString *errorMessage) Q_DECL_OVERRIDE;

        bool setPromotedClassIncludeFile(const QString &className, const QString &includeFile, QString *errorMessage) Q_DECL_OVERRIDE;

        QList<QDesignerWidgetDataBaseItemInterface *> promotionBaseClasses() const Q_DECL_OVERRIDE;

    private:
        bool canBePromoted(const QDesignerWidgetDataBaseItemInterface *) const;
        void refreshObjectInspector();

        QDesignerFormEditorInterface *m_core;
    };
}

QT_END_NAMESPACE

#endif // QDESIGNERPROMOTION_H
