﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/appconfigdata/model/InvalidParameterProblem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppConfigData
{
namespace Model
{

  /**
   * <p>Contains details about an invalid parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/InvalidParameterDetail">AWS
   * API Reference</a></p>
   */
  class AWS_APPCONFIGDATA_API InvalidParameterDetail
  {
  public:
    InvalidParameterDetail();
    InvalidParameterDetail(Aws::Utils::Json::JsonView jsonValue);
    InvalidParameterDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Detail describing why an individual parameter did not satisfy the constraints
     * specified by the service</p>
     */
    inline const InvalidParameterProblem& GetProblem() const{ return m_problem; }

    /**
     * <p>Detail describing why an individual parameter did not satisfy the constraints
     * specified by the service</p>
     */
    inline bool ProblemHasBeenSet() const { return m_problemHasBeenSet; }

    /**
     * <p>Detail describing why an individual parameter did not satisfy the constraints
     * specified by the service</p>
     */
    inline void SetProblem(const InvalidParameterProblem& value) { m_problemHasBeenSet = true; m_problem = value; }

    /**
     * <p>Detail describing why an individual parameter did not satisfy the constraints
     * specified by the service</p>
     */
    inline void SetProblem(InvalidParameterProblem&& value) { m_problemHasBeenSet = true; m_problem = std::move(value); }

    /**
     * <p>Detail describing why an individual parameter did not satisfy the constraints
     * specified by the service</p>
     */
    inline InvalidParameterDetail& WithProblem(const InvalidParameterProblem& value) { SetProblem(value); return *this;}

    /**
     * <p>Detail describing why an individual parameter did not satisfy the constraints
     * specified by the service</p>
     */
    inline InvalidParameterDetail& WithProblem(InvalidParameterProblem&& value) { SetProblem(std::move(value)); return *this;}

  private:

    InvalidParameterProblem m_problem;
    bool m_problemHasBeenSet;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
