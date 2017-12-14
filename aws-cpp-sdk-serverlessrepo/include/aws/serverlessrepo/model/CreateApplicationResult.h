﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/Version.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateApplicationResult
  {
  public:
    CreateApplicationResult();
    CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The application Amazon Resource Name (ARN).
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline CreateApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline CreateApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline CreateApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(const Aws::String& value) { m_author = value; }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(Aws::String&& value) { m_author = std::move(value); }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(const char* value) { m_author.assign(value); }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline CreateApplicationResult& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline CreateApplicationResult& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline CreateApplicationResult& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * The date/time this resource was created.
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * The date/time this resource was created.
     */
    inline CreateApplicationResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * The date/time this resource was created.
     */
    inline CreateApplicationResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * The date/time this resource was created.
     */
    inline CreateApplicationResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline CreateApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline CreateApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline CreateApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labels = value; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labels = std::move(value); }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationResult& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationResult& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationResult& AddLabels(const Aws::String& value) { m_labels.push_back(value); return *this; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationResult& AddLabels(Aws::String&& value) { m_labels.push_back(std::move(value)); return *this; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationResult& AddLabels(const char* value) { m_labels.push_back(value); return *this; }


    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline const Aws::String& GetLicenseUrl() const{ return m_licenseUrl; }

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline void SetLicenseUrl(const Aws::String& value) { m_licenseUrl = value; }

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline void SetLicenseUrl(Aws::String&& value) { m_licenseUrl = std::move(value); }

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline void SetLicenseUrl(const char* value) { m_licenseUrl.assign(value); }

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline CreateApplicationResult& WithLicenseUrl(const Aws::String& value) { SetLicenseUrl(value); return *this;}

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline CreateApplicationResult& WithLicenseUrl(Aws::String&& value) { SetLicenseUrl(std::move(value)); return *this;}

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline CreateApplicationResult& WithLicenseUrl(const char* value) { SetLicenseUrl(value); return *this;}


    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline CreateApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline CreateApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the application.\nMin Length=1. Max Length=140\nPattern:
     * "[a-zA-Z0-9\\-]+";
     */
    inline CreateApplicationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline const Aws::String& GetReadmeUrl() const{ return m_readmeUrl; }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeUrl(const Aws::String& value) { m_readmeUrl = value; }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeUrl(Aws::String&& value) { m_readmeUrl = std::move(value); }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeUrl(const char* value) { m_readmeUrl.assign(value); }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline CreateApplicationResult& WithReadmeUrl(const Aws::String& value) { SetReadmeUrl(value); return *this;}

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline CreateApplicationResult& WithReadmeUrl(Aws::String&& value) { SetReadmeUrl(std::move(value)); return *this;}

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline CreateApplicationResult& WithReadmeUrl(const char* value) { SetReadmeUrl(value); return *this;}


    /**
     * A valid identifier from https://spdx.org/licenses/.
     */
    inline const Aws::String& GetSpdxLicenseId() const{ return m_spdxLicenseId; }

    /**
     * A valid identifier from https://spdx.org/licenses/.
     */
    inline void SetSpdxLicenseId(const Aws::String& value) { m_spdxLicenseId = value; }

    /**
     * A valid identifier from https://spdx.org/licenses/.
     */
    inline void SetSpdxLicenseId(Aws::String&& value) { m_spdxLicenseId = std::move(value); }

    /**
     * A valid identifier from https://spdx.org/licenses/.
     */
    inline void SetSpdxLicenseId(const char* value) { m_spdxLicenseId.assign(value); }

    /**
     * A valid identifier from https://spdx.org/licenses/.
     */
    inline CreateApplicationResult& WithSpdxLicenseId(const Aws::String& value) { SetSpdxLicenseId(value); return *this;}

    /**
     * A valid identifier from https://spdx.org/licenses/.
     */
    inline CreateApplicationResult& WithSpdxLicenseId(Aws::String&& value) { SetSpdxLicenseId(std::move(value)); return *this;}

    /**
     * A valid identifier from https://spdx.org/licenses/.
     */
    inline CreateApplicationResult& WithSpdxLicenseId(const char* value) { SetSpdxLicenseId(value); return *this;}


    /**
     * Version information about the application.
     */
    inline const Version& GetVersion() const{ return m_version; }

    /**
     * Version information about the application.
     */
    inline void SetVersion(const Version& value) { m_version = value; }

    /**
     * Version information about the application.
     */
    inline void SetVersion(Version&& value) { m_version = std::move(value); }

    /**
     * Version information about the application.
     */
    inline CreateApplicationResult& WithVersion(const Version& value) { SetVersion(value); return *this;}

    /**
     * Version information about the application.
     */
    inline CreateApplicationResult& WithVersion(Version&& value) { SetVersion(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_author;

    Aws::String m_creationTime;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_labels;

    Aws::String m_licenseUrl;

    Aws::String m_name;

    Aws::String m_readmeUrl;

    Aws::String m_spdxLicenseId;

    Version m_version;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws